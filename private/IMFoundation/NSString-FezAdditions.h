//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (FezAdditions)
+ (id)generatedRoomNameForGroupChat;
+ (id)randomString;
+ (id)copyStringGUIDForObject:(id)arg1;
+ (id)stringGUIDForObject:(id)arg1;
+ (id)stringGUID;
+ (id)copyStringGUID;
- (_Bool)roomNameIsProbablyAutomaticallyGenerated;
- (id)stringByRemovingCharactersFromSet:(id)arg1;
- (id)stringWithLTREmbedding;
- (id)pathStringForDisplay;
- (id)__stringByStrippingAttachmentAndControlCharacters;
- (id)__stringByStrippingControlCharacters;
- (id)uniqueSavePath;
- (id)stringByRemovingWhitespace;
- (struct _NSRange)__rangeOfNewlineInRange:(struct _NSRange)arg1;
- (id)stringByResolvingAndStandardizingPath;
- (_Bool)_appearsToBeBusinessID;
- (_Bool)_appearsToBeDSID;
- (_Bool)_appearsToBePhoneNumber;
- (id)_md5Hash;
- (id)_stripPotentialTokenURIWithToken:(id *)arg1;
- (_Bool)_appearsToBeEmail;
- (id)_IDFromFZIDType:(long long)arg1;
- (id)_URIFromFZIDType:(long long)arg1;
- (id)_URIFromCanonicalizedFZIDType:(long long)arg1;
- (long long)_FZBestGuessFZIDType;
- (id)_bestGuessURIFromCanicalizedID;
- (id)_URIFromCanonicalizedBusinessID;
- (id)_URIFromCanonicalizedDSID;
- (id)_URIFromCanonicalizedPhoneNumber;
- (id)_URIFromCanonicalizedEmail;
- (id)_bestGuessURI;
- (id)_URIFromBusinessID;
- (id)_URIFromDSID;
- (id)_URIFromPhoneNumber;
- (id)_URIFromEmail;
- (long long)_FZIDType;
- (id)_FZIDFromPhoneNumber;
- (id)_FZIDFromEmail;
- (id)_stripFZIDPrefix;
- (id)urlFromString;
- (id)stringByAddingURLEscapes;
- (id)stringByRemovingURLEscapes;
- (id)trimmedString;
- (long long)localizedCompareToString:(id)arg1;
- (unsigned int)unsignedIntValue;
- (unsigned int)hexValue;
- (_Bool)isDirectory;
- (_Bool)isEqualToIgnoringCase:(id)arg1;
@end

