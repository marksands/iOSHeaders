//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, UIColor, UIImage;

@interface SiriUISashItem : NSObject
{
    _Bool _canPunchout;
    _Bool _hidden;
    _Bool _isDefault;
    NSString *_title;
    UIImage *_image;
    UIColor *_backgroundColor;
    UIColor *_textColor;
    NSString *_applicationBundleIdentifier;
    NSArray *_commands;
}

+ (void)_setLanguageCode:(id)arg1;
+ (id)_languageCode;
+ (id)defaultSashItem;
@property(nonatomic, setter=_setDefault:) _Bool isDefault; // @synthesize isDefault=_isDefault;
@property(copy, nonatomic) NSArray *commands; // @synthesize commands=_commands;
@property(readonly, copy, nonatomic) NSString *applicationBundleIdentifier; // @synthesize applicationBundleIdentifier=_applicationBundleIdentifier;
@property(nonatomic, getter=isHidden) _Bool hidden; // @synthesize hidden=_hidden;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool canPunchout; // @synthesize canPunchout=_canPunchout;
- (_Bool)isEqual:(id)arg1;
- (id)init;
- (id)initWithExtension:(id)arg1;
- (id)initWithApplicationBundleIdentifier:(id)arg1;
- (id)initWithTitle:(id)arg1 image:(id)arg2;

@end

