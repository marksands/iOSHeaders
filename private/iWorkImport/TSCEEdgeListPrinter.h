//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface TSCEEdgeListPrinter : NSObject
{
    NSMutableDictionary *_edgesForOwner;
}

- (void).cxx_destruct;
- (id)stringForEdgesWithLimit:(unsigned long long)arg1;
- (id)stringForOwnerID:(id)arg1 withLimit:(unsigned long long)arg2;
- (void)addEdge:(id)arg1 forOwner:(id)arg2;

@end

