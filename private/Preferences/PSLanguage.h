//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface PSLanguage : NSObject
{
    NSString *_languageCode;
    NSString *_languageName;
    NSString *_localizedLanguageName;
}

+ (id)languageWithCode:(id)arg1 name:(id)arg2 localizedName:(id)arg3;
@property(retain, nonatomic) NSString *localizedLanguageName; // @synthesize localizedLanguageName=_localizedLanguageName;
@property(retain, nonatomic) NSString *languageName; // @synthesize languageName=_languageName;
@property(retain, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
- (void).cxx_destruct;
- (_Bool)displayNamesAreEqual;

@end

