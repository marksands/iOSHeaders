//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSLayoutConstraint, UIActivityIndicatorView, UIImageView;

@interface HKDataMetadataWorkoutRouteCell : UITableViewCell
{
    UIImageView *_routeImageView;
    UIActivityIndicatorView *_activityIndicator;
    NSLayoutConstraint *_heightConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) UIImageView *routeImageView; // @synthesize routeImageView=_routeImageView;
- (void).cxx_destruct;
- (void)setRouteImage:(id)arg1;
- (void)setupConstraints;
- (id)init;

@end

