//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSMutableDictionary.h"

@interface NSMutableDictionary (CRKEDUAdditions)
- (id)crk_validateAndRemoveArrayOfClass:(Class)arg1 withKey:(id)arg2 isRequired:(_Bool)arg3 outError:(id *)arg4;
- (id)crk_validateAndRemoveArrayOfClass:(Class)arg1 withKey:(id)arg2 isRequired:(_Bool)arg3 allowZeroLengthString:(_Bool)arg4 outError:(id *)arg5;
- (id)crk_validateAndRemoveObjectOfClass:(Class)arg1 withKey:(id)arg2 isRequired:(_Bool)arg3 outError:(id *)arg4;
- (id)crk_validateAndRemoveNonZeroLengthStringWithKey:(id)arg1 isRequired:(_Bool)arg2 outError:(id *)arg3;
@end

