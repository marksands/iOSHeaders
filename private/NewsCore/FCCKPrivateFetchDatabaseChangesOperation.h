//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NewsCore/FCCKPrivateDatabaseOperation.h>

@class NSArray;

@interface FCCKPrivateFetchDatabaseChangesOperation : FCCKPrivateDatabaseOperation
{
    _Bool _resultMoreComing;
    id <NSCoding> _previousServerChangeToken;
    CDUnknownBlockType _fetchDatabaseChangesCompletionBlock;
    NSArray *_resultChangedZoneIDs;
    NSArray *_resultDeletedZoneIDs;
    id <NSCoding> _resultServerChangeToken;
}

@property(nonatomic) _Bool resultMoreComing; // @synthesize resultMoreComing=_resultMoreComing;
@property(retain, nonatomic) id <NSCoding> resultServerChangeToken; // @synthesize resultServerChangeToken=_resultServerChangeToken;
@property(retain, nonatomic) NSArray *resultDeletedZoneIDs; // @synthesize resultDeletedZoneIDs=_resultDeletedZoneIDs;
@property(retain, nonatomic) NSArray *resultChangedZoneIDs; // @synthesize resultChangedZoneIDs=_resultChangedZoneIDs;
@property(copy, nonatomic) CDUnknownBlockType fetchDatabaseChangesCompletionBlock; // @synthesize fetchDatabaseChangesCompletionBlock=_fetchDatabaseChangesCompletionBlock;
@property(copy, nonatomic) id <NSCoding> previousServerChangeToken; // @synthesize previousServerChangeToken=_previousServerChangeToken;
- (void).cxx_destruct;
- (id)_changeTokenKeyForDestination:(long long)arg1;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (_Bool)validateOperation;

@end

