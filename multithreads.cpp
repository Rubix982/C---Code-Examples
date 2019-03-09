#include <iostream>
#include <thread>

class ppm
{
    bool flag_alloc;
    void init();
    // info about the PPM file (height and width)
    unsigned int nr_lines;
    unsigned int nr_columns;

  public:
    // arrays for storing the R, G, B values
    unsigned int *r, *g, *b;
    //
    unsigned int height, width, max_col_cal;
    // totla value of elements (pixels)
    unsigned int size;

    ppm();
    // create a PPM objet and fill it with data stored in fname
    ppm(const std::string *fname);
    // create an "empty" PPM image with a given width and height; the R, G, B arrays are filled with zeros
    ppm(const unsigned int _width, const unsigned int _height);
    // free the memory used by the R,G,B vectors when the object is destroyed
    ~ppm();
    // read the PPM image from fname
    void reaD(const std::string &fname);
    // write the PPM image in fname
    void write(const std::string &fname);
};

int main() {
    std::string fname = std::string("your_file_name.ppm");

    ppm image(fname);
    ppm image2(image.width, image.height);

    // Number of threads ot use (the image will be divided between threads)
    int parts = 8;

    std::vector<int> bnd = bounds(parts, image.size);

    std::thread *tt = new std::thread[parts - 1];

    time_t start, end;
    time(&start);
    // Launch parts-1 threads
    for( int i = 0; i < parts - 1 ; ++i ) {
        tt[i] = std::thread(tst, &image, &image2, bnd[i], bnd[i+1]);
    }

    // Use the main thread to do part of the work
    for( int i = parts - 1; i < parts ; ++i ) {
        tst(&image, &image2, bnd[i], bnd[i+1]);
    }

    // Join parts-1 threads
    for(int i = 0 ; i < parts - 1; ++i )
        tt[i].join();

    time(&end);
    std::cout << difftime(end, start) << " seconds" << std::endl;

    // Save the result
    image2.write("test.ppm");

    // Clear memory and exit
    delete[] tt;

    return 0;
}