//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSFormatter.h"

@interface HFFormatterTransformer : NSFormatter
{
    NSFormatter *_sourceFormatter;
    CDUnknownBlockType _transformBlock;
}

@property(copy, nonatomic) CDUnknownBlockType transformBlock; // @synthesize transformBlock=_transformBlock;
@property(copy, nonatomic) NSFormatter *sourceFormatter; // @synthesize sourceFormatter=_sourceFormatter;
- (void).cxx_destruct;
- (id)stringForObjectValue:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithSourceFormatter:(id)arg1 transformBlock:(CDUnknownBlockType)arg2;

@end

