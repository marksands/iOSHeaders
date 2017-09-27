//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MPUFoundation/MPUQueryDataSource.h>

@class NSArray, NSOperationQueue, NSString, _MPUSearchOperation;

@interface MPUSearchDataSource : MPUQueryDataSource
{
    NSOperationQueue *_operationQueue;
    _MPUSearchOperation *_searchOperation;
    NSArray *_searchResults;
    MPUQueryDataSource *_dataSource;
    NSString *_searchString;
}

@property(readonly, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property(readonly, nonatomic) MPUQueryDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (id)_searchPropertiesForGroupingType:(long long)arg1;
- (void)_searchOperation:(id)arg1 didFinishWithResults:(id)arg2;
- (void)filterResultsUsingSearchString:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)filterResultsUsingSearchString:(id)arg1;
- (id)entities;
- (unsigned long long)count;
- (void)dealloc;
- (id)initWithDataSource:(id)arg1 operationQueue:(id)arg2;
- (id)initWithDataSource:(id)arg1;

@end

