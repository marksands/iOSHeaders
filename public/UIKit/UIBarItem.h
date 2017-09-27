//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "UIAppearance.h"

@class NSString, UIImage;

@interface UIBarItem : NSObject <NSCoding, UIAppearance>
{
    _Bool _hasCustomizableInstanceAppearanceModifications;
    _Bool _shouldArchiveUIAppearanceTags;
    UIImage *_largeContentSizeImage;
    long long _tag;
    struct UIEdgeInsets _largeContentSizeImageInsets;
}

+ (id)appearanceForTraitCollection:(id)arg1 whenContainedIn:(Class)arg2;
+ (id)appearanceForTraitCollection:(id)arg1 whenContainedInInstancesOfClasses:(id)arg2;
+ (id)appearanceForTraitCollection:(id)arg1;
+ (id)appearanceWhenContainedIn:(Class)arg1;
+ (id)appearanceWhenContainedInInstancesOfClasses:(id)arg1;
+ (id)_appearanceWhenContainedIn:(id)arg1;
+ (id)appearance;
+ (id)_appearanceBlindViewClasses;
@property(nonatomic) long long tag; // @synthesize tag=_tag;
@property(nonatomic) struct UIEdgeInsets largeContentSizeImageInsets; // @synthesize largeContentSizeImageInsets=_largeContentSizeImageInsets;
@property(retain, nonatomic) UIImage *largeContentSizeImage; // @synthesize largeContentSizeImage=_largeContentSizeImage;
@property(nonatomic, setter=_setShouldArchiveUIAppearanceTags:) _Bool _shouldArchiveUIAppearanceTags; // @synthesize _shouldArchiveUIAppearanceTags;
@property(nonatomic, setter=_setHasCustomizableInstanceAppearanceModifications:) _Bool _hasCustomizableInstanceAppearanceModifications; // @synthesize _hasCustomizableInstanceAppearanceModifications;
- (void).cxx_destruct;
- (id)_imageForState:(unsigned long long)arg1 metrics:(long long)arg2 position:(long long)arg3 type:(long long)arg4;
- (id)_attributedTitleForState:(unsigned long long)arg1 withDefaultAttributes:(id)arg2;
@property(readonly, nonatomic) _Bool hasImage;
@property(readonly, nonatomic) _Bool hasTitle;
@property(readonly, nonatomic) _Bool selected;
@property(readonly, copy, nonatomic) NSString *resolvedTitle;
- (id)titleTextAttributesForState:(unsigned long long)arg1;
- (void)setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @dynamic enabled;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) UIImage *image; // @dynamic image;
@property(nonatomic) struct UIEdgeInsets imageInsets; // @dynamic imageInsets;
@property(retain, nonatomic) UIImage *landscapeImagePhone; // @dynamic landscapeImagePhone;
@property(nonatomic) struct UIEdgeInsets landscapeImagePhoneInsets; // @dynamic landscapeImagePhoneInsets;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *title; // @dynamic title;

@end

