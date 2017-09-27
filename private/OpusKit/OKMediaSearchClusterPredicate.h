//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OpusKit/OKMediaClusterPredicate.h>

@class NSString;

@interface OKMediaSearchClusterPredicate : OKMediaClusterPredicate
{
    NSString *_searchString;
    unsigned long long _type;
    unsigned long long _options;
}

- (float)efficiencyForItems:(id)arg1;
- (id)evaluateItems:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (id)title;
- (void)dealloc;
- (id)initWithString:(id)arg1 type:(unsigned long long)arg2 options:(unsigned long long)arg3;

@end

