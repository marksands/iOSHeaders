//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface NFCallbackScope : NSObject
{
    unsigned long long _scope;
    NSArray *_names;
}

@property(readonly, nonatomic) NSArray *names; // @synthesize names=_names;
@property(readonly, nonatomic) unsigned long long scope; // @synthesize scope=_scope;
- (void).cxx_destruct;
- (id)initWithScope:(unsigned long long)arg1 names:(id)arg2;

@end

