//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class CLKFont;

@interface CLKUITimeLabelStyle : NSObject <NSCopying>
{
    CLKFont *_threeDigitFont;
    CLKFont *_fourDigitFont;
    CLKFont *_designatorFont;
}

@property(retain, nonatomic) CLKFont *designatorFont; // @synthesize designatorFont=_designatorFont;
@property(retain, nonatomic) CLKFont *fourDigitFont; // @synthesize fourDigitFont=_fourDigitFont;
@property(retain, nonatomic) CLKFont *threeDigitFont; // @synthesize threeDigitFont=_threeDigitFont;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

