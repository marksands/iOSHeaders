//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSDictionary.h"

@interface NSDictionary (MCUtilities)
+ (id)MCShortenedDictionary:(id)arg1;
+ (id)MCShortenedArray:(id)arg1;
+ (id)MCShortenedData:(id)arg1;
+ (id)MCShortenedObject:(id)arg1;
- (id)MCShortenedPlistDescription;
- (id)MCRetainOptionalNonZeroLengthStringKey:(id)arg1 errorDomain:(id)arg2 invalidDataCode:(long long)arg3 invalidDataErrorString:(id)arg4 outError:(id *)arg5;
- (id)MCRetainRequiredNonZeroLengthStringKey:(id)arg1 errorDomain:(id)arg2 missingDataCode:(long long)arg3 missingDataErrorString:(id)arg4 invalidDataCode:(long long)arg5 invalidDataErrorString:(id)arg6 outError:(id *)arg7;
- (id)MCRetainOptionalObjectKey:(id)arg1 type:(Class)arg2 errorDomain:(id)arg3 invalidDataCode:(long long)arg4 invalidDataErrorString:(id)arg5 outError:(id *)arg6;
- (id)MCRetainRequiredObjectKey:(id)arg1 type:(Class)arg2 errorDomain:(id)arg3 missingDataCode:(long long)arg4 missingDataErrorString:(id)arg5 invalidDataCode:(long long)arg6 invalidDataErrorString:(id)arg7 outError:(id *)arg8;
- (id)MCDeepCopy;
- (id)MCDeepCopyWithZone:(struct _NSZone *)arg1;
- (id)MCMutableDeepCopy;
- (id)MCMutableDeepCopyWithZone:(struct _NSZone *)arg1;
@end

