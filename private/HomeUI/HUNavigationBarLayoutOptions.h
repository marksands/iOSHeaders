//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class HUNavigationButtonLayoutOptions;

@interface HUNavigationBarLayoutOptions : NSObject <NSCopying>
{
    double _topMargin;
    double _bottomMargin;
    double _height;
    HUNavigationButtonLayoutOptions *_buttonLayoutOptions;
    long long _viewSizeSubclass;
    double _containerLeadingMargin;
    double _containerTrailingMargin;
}

+ (id)defaultOptionsForViewSizeSubclass:(long long)arg1 containerLeadingMargin:(double)arg2 containerTrailingMargin:(double)arg3;
@property(nonatomic) double containerTrailingMargin; // @synthesize containerTrailingMargin=_containerTrailingMargin;
@property(nonatomic) double containerLeadingMargin; // @synthesize containerLeadingMargin=_containerLeadingMargin;
@property(readonly, nonatomic) long long viewSizeSubclass; // @synthesize viewSizeSubclass=_viewSizeSubclass;
@property(copy, nonatomic) HUNavigationButtonLayoutOptions *buttonLayoutOptions; // @synthesize buttonLayoutOptions=_buttonLayoutOptions;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) double bottomMargin; // @synthesize bottomMargin=_bottomMargin;
@property(nonatomic) double topMargin; // @synthesize topMargin=_topMargin;
- (void).cxx_destruct;
@property(readonly, nonatomic) double trailingMargin;
@property(readonly, nonatomic) double leadingMargin;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithViewSizeSubclass:(long long)arg1;

@end

