//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSMutableDictionary, NSString;

@interface PSSpecifier : NSObject
{
    id target;
    SEL getter;
    SEL setter;
    SEL action;
    SEL cancel;
    Class detailControllerClass;
    long long cellType;
    Class editPaneClass;
    long long keyboardType;
    long long autoCapsType;
    long long autoCorrectionType;
    unsigned long long textFieldType;
    NSString *_name;
    NSArray *_values;
    NSDictionary *_titleDict;
    NSDictionary *_shortTitleDict;
    id _userInfo;
    NSMutableDictionary *_properties;
    SEL _confirmationAction;
    SEL _confirmationCancelAction;
    SEL _buttonAction;
    SEL _controllerLoadAction;
    _Bool _showContentString;
}

+ (long long)keyboardTypeForString:(id)arg1;
+ (long long)autoCapsTypeForString:(id)arg1;
+ (long long)autoCorrectionTypeForNumber:(id)arg1;
+ (id)specifierWithSpecifier:(id)arg1;
+ (id)groupSpecifierWithID:(id)arg1 name:(id)arg2;
+ (id)groupSpecifierWithID:(id)arg1;
+ (id)emptyGroupSpecifier;
+ (id)groupSpecifierWithName:(id)arg1;
+ (id)preferenceSpecifierNamed:(id)arg1 target:(id)arg2 set:(SEL)arg3 get:(SEL)arg4 detail:(Class)arg5 cell:(long long)arg6 edit:(Class)arg7;
+ (id)deleteButtonSpecifierWithName:(id)arg1 target:(id)arg2 action:(SEL)arg3;
@property(nonatomic) _Bool showContentString; // @synthesize showContentString=_showContentString;
@property(nonatomic) SEL controllerLoadAction; // @synthesize controllerLoadAction=_controllerLoadAction;
@property(nonatomic) SEL buttonAction; // @synthesize buttonAction=_buttonAction;
@property(nonatomic) SEL confirmationCancelAction; // @synthesize confirmationCancelAction=_confirmationCancelAction;
@property(nonatomic) SEL confirmationAction; // @synthesize confirmationAction=_confirmationAction;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSArray *values; // @synthesize values=_values;
@property(retain, nonatomic) NSDictionary *shortTitleDictionary; // @synthesize shortTitleDictionary=_shortTitleDict;
@property(retain, nonatomic) NSDictionary *titleDictionary; // @synthesize titleDictionary=_titleDict;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) Class editPaneClass; // @synthesize editPaneClass;
@property(nonatomic) long long cellType; // @synthesize cellType;
@property(nonatomic) Class detailControllerClass; // @synthesize detailControllerClass;
@property(nonatomic) __weak id target; // @synthesize target;
- (void).cxx_destruct;
- (_Bool)isEqualToSpecifier:(id)arg1;
- (long long)titleCompare:(id)arg1;
- (void)setKeyboardType:(long long)arg1 autoCaps:(long long)arg2 autoCorrection:(long long)arg3;
@property(retain, nonatomic) NSString *identifier;
- (id)description;
- (void)setupIconImageWithPath:(id)arg1;
- (void)setupIconImageWithBundle:(id)arg1;
- (void)setValues:(id)arg1 titles:(id)arg2 shortTitles:(id)arg3 usingLocalizedTitleSorting:(_Bool)arg4;
- (void)setValues:(id)arg1 titles:(id)arg2 shortTitles:(id)arg3;
- (void)setValues:(id)arg1 titles:(id)arg2;
- (void)loadValuesAndTitlesFromDataSource;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)performConfirmationCancelAction;
- (void)performConfirmationAction;
- (void)performButtonAction;
- (void)performControllerLoadAction;
- (SEL)legacyCancel;
- (void)setLegacyCancel:(SEL)arg1;
- (SEL)legacyAction;
- (void)setLegacyAction:(SEL)arg1;
- (void)performLegacyAction;
- (id)performGetter;
- (_Bool)hasValidGetter;
- (void)performSetterWithValue:(id)arg1;
- (_Bool)hasValidSetter;
- (id)properties;
- (void)setProperties:(id)arg1;
- (void)removePropertyForKey:(id)arg1;
- (void)setProperty:(id)arg1 forKey:(id)arg2;
- (id)propertyForKey:(id)arg1;
- (id)init;
- (_Bool)versionLabelEnabled;
- (void)setVersionLabelEnabled:(_Bool)arg1;

@end

