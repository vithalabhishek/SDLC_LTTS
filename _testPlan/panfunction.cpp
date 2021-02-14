bool isValidPanCardNo(string panCardNo)
{
     const regex pattern("[A-Z]{5}[0-9]{4}[A-Z]{1}");
 
  if (panCardNo.empty()) {
        return false;
    }
 
    if (regex_match(panCardNo, pattern))
    {
        return true;
    }
    else
    {
        return false;
    }
}
