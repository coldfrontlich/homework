int twice_as_old(int dad, int son) {
  son *= 2;
  dad = dad - son;
  if (dad > 0){
    return dad;
  } else{
    return -dad;
  }
}
