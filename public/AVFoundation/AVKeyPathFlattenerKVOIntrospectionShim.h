//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVCallbackCancellation.h"
#import "AVKVOIntrospection.h"

@class NSString;

@interface AVKeyPathFlattenerKVOIntrospectionShim : NSObject <AVKVOIntrospection, AVCallbackCancellation>
{
    NSObject *_observedObject;
    id <AVKVOIntrospection><AVCallbackCancellation> _realNotifier;
}

- (void)cancelCallbacks;
@property(readonly, nonatomic) NSObject *observedObject;
- (void)dealloc;
- (id)initWithObservedObject:(id)arg1 realNotifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

