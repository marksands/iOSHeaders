//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSFormatter.h"

#import "NSCopying.h"

@interface HFSimpleFormatter : NSFormatter <NSCopying>
{
    CDUnknownBlockType _formatterBlock;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType formatterBlock; // @synthesize formatterBlock=_formatterBlock;
- (void).cxx_destruct;
- (id)stringForObjectValue:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithFormatterBlock:(CDUnknownBlockType)arg1;

@end

