//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable;

@interface NUMultiDelegate : NSObject
{
    NSHashTable *_children;
}

@property(readonly, nonatomic) NSHashTable *children; // @synthesize children=_children;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (void)replaceDelegate:(id)arg1 withDelegate:(id)arg2;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
@property(readonly, nonatomic) id delegate;
- (id)initWithDelegate:(id)arg1;

@end

