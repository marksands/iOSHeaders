//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@class FCAssetManager, FCCKContentDatabase, FCStreamingResults, FCTagRecordSource, NSError, NSString;

@interface FCTagSearchOperation : FCOperation
{
    id <FCContentContext> _contentContext;
    NSString *_searchString;
    unsigned long long _tagType;
    unsigned long long _batchSize;
    CDUnknownBlockType _searchResultsBlock;
    FCTagRecordSource *_tagRecordSource;
    FCCKContentDatabase *_contentDatabase;
    FCAssetManager *_assetManager;
    FCStreamingResults *_searchResults;
    NSError *_searchError;
}

@property(retain, nonatomic) NSError *searchError; // @synthesize searchError=_searchError;
@property(retain, nonatomic) FCStreamingResults *searchResults; // @synthesize searchResults=_searchResults;
@property(retain, nonatomic) FCAssetManager *assetManager; // @synthesize assetManager=_assetManager;
@property(retain, nonatomic) FCCKContentDatabase *contentDatabase; // @synthesize contentDatabase=_contentDatabase;
@property(retain, nonatomic) FCTagRecordSource *tagRecordSource; // @synthesize tagRecordSource=_tagRecordSource;
@property(copy) CDUnknownBlockType searchResultsBlock; // @synthesize searchResultsBlock=_searchResultsBlock;
@property(nonatomic) unsigned long long batchSize; // @synthesize batchSize=_batchSize;
@property(nonatomic) unsigned long long tagType; // @synthesize tagType=_tagType;
@property(copy, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property(retain, nonatomic) id <FCContentContext> contentContext; // @synthesize contentContext=_contentContext;
- (void).cxx_destruct;
- (id)_establishStreamOfTags;
- (void)_performSearchQuery:(CDUnknownBlockType)arg1;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (void)prepareOperation;
- (_Bool)validateOperation;

@end

