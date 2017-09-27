//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MapKit/MKPlaceSectionRowView.h>

@class NSLayoutConstraint, NSString, _MKUILabel;

__attribute__((visibility("hidden")))
@interface MKPlaceTextCell : MKPlaceSectionRowView
{
    _MKUILabel *_label;
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_bottomConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *bottomConstraint; // @synthesize bottomConstraint=_bottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *topConstraint; // @synthesize topConstraint=_topConstraint;
@property(retain, nonatomic) _MKUILabel *label; // @synthesize label=_label;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *text;
- (void)_contentSizeDidChange;
- (id)initWithFrame:(struct CGRect)arg1;

@end

