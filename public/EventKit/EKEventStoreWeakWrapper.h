//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EKEventStore;

__attribute__((visibility("hidden")))
@interface EKEventStoreWeakWrapper : NSObject
{
    void *_unsafeRawPointer;
    EKEventStore *_weakEventStore;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) void *unsafeRawPointer;
@property(readonly, nonatomic) EKEventStore *weakEventStore;
- (id)initWithEventStore:(id)arg1;

@end

