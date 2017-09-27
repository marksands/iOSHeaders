//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface TSWPLineSpacing : NSObject <NSCopying>
{
    int _mode;
    double _amount;
    double _baselineRule;
}

+ (id)lineSpacing;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (double)baselineRule;
- (double)amount;
- (int)mode;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMode:(int)arg1 amount:(double)arg2;
- (id)initWithMode:(int)arg1 amount:(double)arg2 baselineRule:(double)arg3;
- (id)init;

@end

