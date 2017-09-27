//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMapTable, NSString;

@interface PEXNotificationHandler : NSObject
{
    // Error parsing type: {atomic_flag="_Value"AB}, name: _isFiring
    // Error parsing type: {atomic_flag="_Value"AB}, name: _hasWaiter
    unsigned int _waitTime;
    NSMapTable *_blockMap;
    NSString *_name;
}

@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSMapTable *blockMap; // @synthesize blockMap=_blockMap;
@property(nonatomic) unsigned int waitTime; // @synthesize waitTime=_waitTime;
- (void).cxx_destruct;
- (id)description;
- (void)addObserverBlock:(CDUnknownBlockType)arg1 forLifetimeOfObject:(id)arg2;
- (void)fire;
- (void)_clearFlags;
- (void)_executeBlocks;
- (id)initWithName:(id)arg1 waitTime:(unsigned int)arg2;

@end

