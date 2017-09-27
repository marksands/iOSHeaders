//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface UNSDataStoreReceipt : NSObject
{
    NSArray *_addedObjects;
    NSArray *_replacedObjects;
    NSArray *_replacementObjects;
    NSArray *_removedObjects;
}

+ (id)receiptWithAddedObjects:(id)arg1 replacedObjects:(id)arg2 replacementObjects:(id)arg3 removedObjects:(id)arg4;
@property(readonly, nonatomic) NSArray *removedObjects; // @synthesize removedObjects=_removedObjects;
@property(readonly, nonatomic) NSArray *replacementObjects; // @synthesize replacementObjects=_replacementObjects;
@property(readonly, nonatomic) NSArray *replacedObjects; // @synthesize replacedObjects=_replacedObjects;
@property(readonly, nonatomic) NSArray *addedObjects; // @synthesize addedObjects=_addedObjects;
- (void).cxx_destruct;
- (_Bool)hasChanges;
- (id)initWithAddedObjects:(id)arg1 replacedObjects:(id)arg2 replacementObjects:(id)arg3 removedObjects:(id)arg4;

@end

