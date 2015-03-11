// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// parse_ms_positions
NumericVector parse_ms_positions(const std::string line);
RcppExport SEXP coalsimr_parse_ms_positions(SEXP lineSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const std::string >::type line(lineSEXP);
    __result = Rcpp::wrap(parse_ms_positions(line));
    return __result;
END_RCPP
}
// parse_ms_output
List parse_ms_output(const List file_names, const NumericVector sample_size, const int loci_number);
RcppExport SEXP coalsimr_parse_ms_output(SEXP file_namesSEXP, SEXP sample_sizeSEXP, SEXP loci_numberSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const List >::type file_names(file_namesSEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type sample_size(sample_sizeSEXP);
    Rcpp::traits::input_parameter< const int >::type loci_number(loci_numberSEXP);
    __result = Rcpp::wrap(parse_ms_output(file_names, sample_size, loci_number));
    return __result;
END_RCPP
}
// parse_sg_output
List parse_sg_output(const List file_names, const int sample_size, const NumericMatrix sequence_length, const int loci_number, const int outgroup_size);
RcppExport SEXP coalsimr_parse_sg_output(SEXP file_namesSEXP, SEXP sample_sizeSEXP, SEXP sequence_lengthSEXP, SEXP loci_numberSEXP, SEXP outgroup_sizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const List >::type file_names(file_namesSEXP);
    Rcpp::traits::input_parameter< const int >::type sample_size(sample_sizeSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix >::type sequence_length(sequence_lengthSEXP);
    Rcpp::traits::input_parameter< const int >::type loci_number(loci_numberSEXP);
    Rcpp::traits::input_parameter< const int >::type outgroup_size(outgroup_sizeSEXP);
    __result = Rcpp::wrap(parse_sg_output(file_names, sample_size, sequence_length, loci_number, outgroup_size));
    return __result;
END_RCPP
}
// parse_trees
CharacterVector parse_trees(const std::string in_file, const NumericVector trio_opts, Function tempfile);
RcppExport SEXP coalsimr_parse_trees(SEXP in_fileSEXP, SEXP trio_optsSEXP, SEXP tempfileSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const std::string >::type in_file(in_fileSEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type trio_opts(trio_optsSEXP);
    Rcpp::traits::input_parameter< Function >::type tempfile(tempfileSEXP);
    __result = Rcpp::wrap(parse_trees(in_file, trio_opts, tempfile));
    return __result;
END_RCPP
}
// calc_jsfs
NumericMatrix calc_jsfs(const List seg_sites, const NumericVector pop1, const NumericVector pop2);
RcppExport SEXP coalsimr_calc_jsfs(SEXP seg_sitesSEXP, SEXP pop1SEXP, SEXP pop2SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const List >::type seg_sites(seg_sitesSEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type pop1(pop1SEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type pop2(pop2SEXP);
    __result = Rcpp::wrap(calc_jsfs(seg_sites, pop1, pop2));
    return __result;
END_RCPP
}
// calc_omegaprime
NumericVector calc_omegaprime(List seg_sites, NumericVector individuals);
RcppExport SEXP coalsimr_calc_omegaprime(SEXP seg_sitesSEXP, SEXP individualsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type seg_sites(seg_sitesSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type individuals(individualsSEXP);
    __result = Rcpp::wrap(calc_omegaprime(seg_sites, individuals));
    return __result;
END_RCPP
}
