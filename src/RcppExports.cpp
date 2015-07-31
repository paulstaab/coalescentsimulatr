// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// parse_ms_positions
NumericVector parse_ms_positions(const std::string line);
RcppExport SEXP coala_parse_ms_positions(SEXP lineSEXP) {
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
RcppExport SEXP coala_parse_ms_output(SEXP file_namesSEXP, SEXP sample_sizeSEXP, SEXP loci_numberSEXP) {
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
List parse_sg_output(const List file_names, const int sample_size, const NumericMatrix sequence_length, const int loci_number, const int outgroup_size, const bool calc_seg_sites);
RcppExport SEXP coala_parse_sg_output(SEXP file_namesSEXP, SEXP sample_sizeSEXP, SEXP sequence_lengthSEXP, SEXP loci_numberSEXP, SEXP outgroup_sizeSEXP, SEXP calc_seg_sitesSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const List >::type file_names(file_namesSEXP);
    Rcpp::traits::input_parameter< const int >::type sample_size(sample_sizeSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix >::type sequence_length(sequence_lengthSEXP);
    Rcpp::traits::input_parameter< const int >::type loci_number(loci_numberSEXP);
    Rcpp::traits::input_parameter< const int >::type outgroup_size(outgroup_sizeSEXP);
    Rcpp::traits::input_parameter< const bool >::type calc_seg_sites(calc_seg_sitesSEXP);
    __result = Rcpp::wrap(parse_sg_output(file_names, sample_size, sequence_length, loci_number, outgroup_size, calc_seg_sites));
    return __result;
END_RCPP
}
// generate_trio_trees
List generate_trio_trees(const List trees, const NumericMatrix llm);
RcppExport SEXP coala_generate_trio_trees(SEXP treesSEXP, SEXP llmSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const List >::type trees(treesSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix >::type llm(llmSEXP);
    __result = Rcpp::wrap(generate_trio_trees(trees, llm));
    return __result;
END_RCPP
}
// calc_four_gamete_stat
NumericMatrix calc_four_gamete_stat(const List seg_sites_list, const IntegerVector individuals, const NumericMatrix locus_length);
RcppExport SEXP coala_calc_four_gamete_stat(SEXP seg_sites_listSEXP, SEXP individualsSEXP, SEXP locus_lengthSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const List >::type seg_sites_list(seg_sites_listSEXP);
    Rcpp::traits::input_parameter< const IntegerVector >::type individuals(individualsSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix >::type locus_length(locus_lengthSEXP);
    __result = Rcpp::wrap(calc_four_gamete_stat(seg_sites_list, individuals, locus_length));
    return __result;
END_RCPP
}
// calc_jsfs
NumericMatrix calc_jsfs(const List seg_sites, const NumericVector pop1, const NumericVector pop2);
RcppExport SEXP coala_calc_jsfs(SEXP seg_sitesSEXP, SEXP pop1SEXP, SEXP pop2SEXP) {
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
// calc_nucleotide_div
NumericVector calc_nucleotide_div(List seg_sites, const NumericVector individuals);
RcppExport SEXP coala_calc_nucleotide_div(SEXP seg_sitesSEXP, SEXP individualsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type seg_sites(seg_sitesSEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type individuals(individualsSEXP);
    __result = Rcpp::wrap(calc_nucleotide_div(seg_sites, individuals));
    return __result;
END_RCPP
}
// calc_mcmf
NumericVector calc_mcmf(const List seg_sites, const NumericVector individuals, const bool has_trios);
RcppExport SEXP coala_calc_mcmf(SEXP seg_sitesSEXP, SEXP individualsSEXP, SEXP has_triosSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const List >::type seg_sites(seg_sitesSEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type individuals(individualsSEXP);
    Rcpp::traits::input_parameter< const bool >::type has_trios(has_triosSEXP);
    __result = Rcpp::wrap(calc_mcmf(seg_sites, individuals, has_trios));
    return __result;
END_RCPP
}
// unphase_segsites
List unphase_segsites(const List seg_sites, const long unsigned int ploidy, const long unsigned int samples_per_ind);
RcppExport SEXP coala_unphase_segsites(SEXP seg_sitesSEXP, SEXP ploidySEXP, SEXP samples_per_indSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const List >::type seg_sites(seg_sitesSEXP);
    Rcpp::traits::input_parameter< const long unsigned int >::type ploidy(ploidySEXP);
    Rcpp::traits::input_parameter< const long unsigned int >::type samples_per_ind(samples_per_indSEXP);
    __result = Rcpp::wrap(unphase_segsites(seg_sites, ploidy, samples_per_ind));
    return __result;
END_RCPP
}
