//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface NRObjectUniquenessFactory : NSObject
{
    NSMutableDictionary *_uniqueObjects;
    NSObject<OS_dispatch_queue> *_uniqueObjectsQueue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)deallocObject:(id)arg1;
- (id)getUniqueObject:(id)arg1;
- (id)init;

@end
