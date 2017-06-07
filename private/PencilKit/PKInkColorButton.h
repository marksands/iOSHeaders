//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIColor;

@interface PKInkColorButton : UIButton
{
    _Bool _isCompact;
    UIColor *_color;
}

+ (id)imageForColor:(id)arg1 selected:(_Bool)arg2 isCompact:(_Bool)arg3;
+ (id)buttonWithColor:(id)arg1 isCompact:(_Bool)arg2;
@property(nonatomic) _Bool isCompact; // @synthesize isCompact=_isCompact;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
- (void).cxx_destruct;
- (id)initWithColor:(id)arg1 isCompact:(_Bool)arg2;

@end

