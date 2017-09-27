//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSFormatter.h"

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface TSKPicaFormatter : NSFormatter
{
    NSString *mPicaSeparator;
    NSNumber *mMinimum;
    NSNumber *mMaximum;
}

@property(copy, nonatomic) NSNumber *maximum; // @synthesize maximum=mMaximum;
@property(copy, nonatomic) NSNumber *minimum; // @synthesize minimum=mMinimum;
@property(copy, nonatomic) NSString *picaSeparator; // @synthesize picaSeparator=mPicaSeparator;
- (_Bool)getObjectValue:(id *)arg1 forString:(id)arg2 errorDescription:(id *)arg3;
- (id)stringForObjectValue:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithPicaSeparator:(id)arg1;

@end

