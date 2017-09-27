//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UITapGestureRecognizer.h>

__attribute__((visibility("hidden")))
@interface _UIBarTapGestureRecognizer : UITapGestureRecognizer
{
    _Bool _failWhenTappingInBars;
    long long _tapCategory;
}

@property(nonatomic) _Bool failWhenTappingInBars; // @synthesize failWhenTappingInBars=_failWhenTappingInBars;
@property(readonly, nonatomic) long long tapCategory; // @synthesize tapCategory=_tapCategory;
- (id)description;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (long long)_categoryForTapLocation:(struct CGPoint)arg1;
- (void)_setDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

