//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKCFaceDetailToggleCell.h>

@class NSString, UIImageView;

@interface NTKCFaceDetailDataSourceCell : NTKCFaceDetailToggleCell
{
    NSString *_bundleIdentifier;
    UIImageView *_iconImageView;
}

+ (id)reuseIdentifier;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithIdentifier:(id)arg1 andLabel:(id)arg2;

@end

