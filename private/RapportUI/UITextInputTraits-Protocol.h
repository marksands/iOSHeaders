//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol UITextInputTraits <NSObject>

@optional
@property(copy, nonatomic) NSString *textContentType;
@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry;
@property(nonatomic) _Bool enablesReturnKeyAutomatically;
@property(nonatomic) long long returnKeyType;
@property(nonatomic) long long keyboardAppearance;
@property(nonatomic) long long keyboardType;
@property(nonatomic) long long smartInsertDeleteType;
@property(nonatomic) long long smartDashesType;
@property(nonatomic) long long smartQuotesType;
@property(nonatomic) long long spellCheckingType;
@property(nonatomic) long long autocorrectionType;
@property(nonatomic) long long autocapitalizationType;
@end

