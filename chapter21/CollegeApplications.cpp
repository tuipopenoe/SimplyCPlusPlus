// Tui Popenoe
// CollegeApplications.cpp

template<class T> CollegeApplications<T>::CollegeApplications(int size){
    setClassSize(size);

    apps = new T[classSize];

    for(int i = 0; i < classSize; i++){
        gpas[i] = 0;
        sats[i] = 0;
    }
}

template<class T> int CollegeApplications<T>::getClassSize(){
    return classSize;
}

template<class T> void CollegeApplications<T>::setClassSize(int size){
    classSize = size;
}

template<class T> T CollegeApplications<T>::getGPA(int i){
    return gpas[i];
}

template<class T> void CollegeApplications<T>::setGPA(T value, int i){
    gpas[i] = value;
}