//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HKAxisLabel, UIColor;

@interface HKAxisAnnotation : NSObject
{
    UIColor *_textColor;
    HKAxisLabel *_axisLabel;
}

@property(readonly, nonatomic) HKAxisLabel *axisLabel; // @synthesize axisLabel=_axisLabel;
@property(readonly, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
- (void).cxx_destruct;
- (id)initWithAnnotation:(id)arg1 color:(id)arg2 position:(id)arg3;

@end

