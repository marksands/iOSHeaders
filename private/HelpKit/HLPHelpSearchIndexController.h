//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HelpKit/HLPRemoteDataController.h>

@class HLPHelpBookController, NSDictionary;

@interface HLPHelpSearchIndexController : HLPRemoteDataController
{
    HLPHelpBookController *_helpBookController;
    NSDictionary *_searchIndex;
}

@property(retain, nonatomic) NSDictionary *searchIndex; // @synthesize searchIndex=_searchIndex;
@property(retain, nonatomic) HLPHelpBookController *helpBookController; // @synthesize helpBookController=_helpBookController;
- (void).cxx_destruct;
- (id)mergeDictionary:(id)arg1 withDictionary:(id)arg2;
- (id)getAllIdentifiersFromTree:(id)arg1 withMaxDepth:(int)arg2;
- (id)searchTree:(id)arg1 forQueryWord:(id)arg2 withMaxDepth:(int)arg3;
- (id)resultsWithSearchText:(id)arg1 localeCode:(id)arg2 searchTerms:(id *)arg3;
- (id)searchTermsForSearchText:(id)arg1 localeCode:(id)arg2;
- (void)processData:(id)arg1 formattedData:(id)arg2;
- (void)processFileURLWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchDataWithDataType:(long long)arg1 identifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

