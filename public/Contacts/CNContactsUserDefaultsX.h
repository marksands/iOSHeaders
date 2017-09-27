//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Contacts/CNContactsUserDefaults.h>

@class CNFoundationUserDefaults;

__attribute__((visibility("hidden")))
@interface CNContactsUserDefaultsX : CNContactsUserDefaults
{
    CNFoundationUserDefaults *_foundationUserDefaults;
}

@property(retain) CNFoundationUserDefaults *foundationUserDefaults; // @synthesize foundationUserDefaults=_foundationUserDefaults;
- (void).cxx_destruct;
- (void)setShortNameFormatPrefersNicknames:(_Bool)arg1;
- (_Bool)shortNameFormatPrefersNicknames;
- (void)setShortNameFormatEnabled:(_Bool)arg1;
- (_Bool)isShortNameFormatEnabled;
- (void)setShortNameFormat:(long long)arg1;
- (long long)shortNameFormat;
- (id)countryCode;
- (long long)sortOrder;
- (long long)newContactDisplayNameOrder;
- (void)setDisplayNameOrder:(long long)arg1;
- (long long)displayNameOrder;
- (id)initWithFoundationUserDefaults:(id)arg1;
- (id)init;

@end

