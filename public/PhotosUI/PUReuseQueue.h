//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface PUReuseQueue : NSObject
{
    _Bool _reuseEnabled;
    NSMutableDictionary *__objectCreationBlocksByReuseIdentifier;
    NSMutableDictionary *__reusableObjectsByReuseIdentifier;
}

@property(nonatomic, getter=isReuseEnabled) _Bool reuseEnabled; // @synthesize reuseEnabled=_reuseEnabled;
@property(readonly, nonatomic) NSMutableDictionary *_reusableObjectsByReuseIdentifier; // @synthesize _reusableObjectsByReuseIdentifier=__reusableObjectsByReuseIdentifier;
@property(readonly, nonatomic) NSMutableDictionary *_objectCreationBlocksByReuseIdentifier; // @synthesize _objectCreationBlocksByReuseIdentifier=__objectCreationBlocksByReuseIdentifier;
- (void).cxx_destruct;
- (void)enqueueObjectForReuse:(id)arg1 withReuseIdentifier:(id)arg2;
- (id)dequeueObjectWithReuseIdentifier:(id)arg1 isReused:(_Bool *)arg2;
- (void)registerObjectCreationBlock:(CDUnknownBlockType)arg1 withReuseIdentifier:(id)arg2;
- (id)init;

@end

