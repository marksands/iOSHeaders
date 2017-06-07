//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@class FCCKContentDatabase, NSArray, NSDictionary, NSMutableArray, NSMutableSet;

@interface FCCKMultiFetchQueryOperation : FCOperation
{
    FCCKContentDatabase *_database;
    NSArray *_recordIDs;
    NSArray *_recordSpecs;
    NSDictionary *_knownRecordIDsToEtags;
    long long _requestTypeOverride;
    NSArray *_networkEvents;
    CDUnknownBlockType _queryCompletionHandler;
    NSDictionary *_recordSpecsByType;
    NSMutableSet *_missingRecordIDs;
    NSMutableArray *_fetchedRecords;
}

@property(retain, nonatomic) NSMutableArray *fetchedRecords; // @synthesize fetchedRecords=_fetchedRecords;
@property(retain, nonatomic) NSMutableSet *missingRecordIDs; // @synthesize missingRecordIDs=_missingRecordIDs;
@property(retain, nonatomic) NSDictionary *recordSpecsByType; // @synthesize recordSpecsByType=_recordSpecsByType;
@property(copy, nonatomic) CDUnknownBlockType queryCompletionHandler; // @synthesize queryCompletionHandler=_queryCompletionHandler;
@property(copy, nonatomic) NSArray *networkEvents; // @synthesize networkEvents=_networkEvents;
@property(nonatomic) long long requestTypeOverride; // @synthesize requestTypeOverride=_requestTypeOverride;
@property(retain, nonatomic) NSDictionary *knownRecordIDsToEtags; // @synthesize knownRecordIDsToEtags=_knownRecordIDsToEtags;
@property(retain, nonatomic) NSArray *recordSpecs; // @synthesize recordSpecs=_recordSpecs;
@property(retain, nonatomic) NSArray *recordIDs; // @synthesize recordIDs=_recordIDs;
@property(retain, nonatomic) FCCKContentDatabase *database; // @synthesize database=_database;
- (void).cxx_destruct;
- (id)_constructQuery;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (void)prepareOperation;
- (_Bool)validateOperation;

@end

