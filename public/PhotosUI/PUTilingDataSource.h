//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSHashTable, NSString;

@interface PUTilingDataSource : NSObject
{
    NSString *_identifier;
    NSHashTable *__changeObservers;
}

@property(readonly, nonatomic) NSHashTable *_changeObservers; // @synthesize _changeObservers=__changeObservers;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)enumerateIndexPathsStartingAtIndexPath:(id)arg1 reverseDirection:(_Bool)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (long long)numberOfSubItemsAtIndexPath:(id)arg1;
- (id)init;

@end

