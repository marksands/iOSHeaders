//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSString.h"

@interface NSString (CalClassAdditions)
+ (id)stringWithFileSystemRepresentation:(const char *)arg1;
+ (id)stringWithContentsOfFile:(id)arg1 usingEncoding:(unsigned long long)arg2;
+ (id)ellipsisString;
- (id)stringByRemovingPrefixCaseInsensitive:(id)arg1;
- (id)stringByReplacingCharactersInSet:(id)arg1 withString:(id)arg2;
- (id)stringByRemovingCharactersInSet:(id)arg1;
- (id)stringByTrimmingWhitespaceAndRemovingNewlines;
- (id)CalSafeHFSPathComponentName;
- (id)appendSlashIfNeeded;
- (id)removeSlashIfNeeded;
- (id)safeFilename;
- (id)searchAndReplaceString:(id)arg1 withString:(id)arg2;
- (id)unquote;
- (id)quote;
- (id)trimWhiteSpace;
- (id)trimCommas;
- (id)trimFirstComma;
- (id)trimFinalComma;
- (id)trimChar:(unsigned short)arg1;
- (id)trimFirstChar:(unsigned short)arg1;
- (id)trimFinalChar:(unsigned short)arg1;
- (_Bool)isPathToICalTruthFile;
- (_Bool)isPathToICalBookmark;
- (_Bool)isPathToBackupFile;
- (_Bool)isPathToICalData;
- (_Bool)isPathToVCalData;
- (_Bool)isPathToAppleScript;
- (id)stringByDecodingSlashes;
- (id)stringByEncodingSlashes;
- (id)directionalityIsolatedString;
- (_Bool)isEqualAsURL:(id)arg1;
- (id)CalAddressComment;
- (id)CalUncommentedAddress;
- (id)_phoneNumberDetector;
- (id)phoneURL;
- (_Bool)isPhoneNumber;
- (id)radarLink;
- (_Bool)isMessagesURL;
- (_Bool)isAddressBookURL;
- (_Bool)isMailURL;
- (id)stringRemovingTel;
- (id)stringAddingTel;
- (_Bool)hasTel;
- (id)stringRemovingMailto;
- (id)stringAddingMailto;
- (id)hostFromEmail;
- (id)userFromEmail;
- (_Bool)resemblesEmailAddress;
- (_Bool)hasMailto;
- (_Bool)isEqualToStringCaseInsensitive:(id)arg1;
- (_Bool)containsCaseAndDiacriticInsensitive:(id)arg1;
- (_Bool)containsCaseInsensitive:(id)arg1;
- (_Bool)hasSuffixCaseInsensitive:(id)arg1;
- (_Bool)hasPrefixCaseAndDiacriticInsensitive:(id)arg1;
- (_Bool)hasPrefixCaseInsensitive:(id)arg1;
- (id)stringByRemovingLastPathComponent;
- (id)stringByURLUnescapingAllReservedCharacters;
- (id)stringByURLEscapingAllReservedCharacters;
- (id)stringByURLQuotingPaths;
- (id)stringByURLQuoting;
- (id)stringByURLUnquoting;
@end

