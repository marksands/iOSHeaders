//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface HKCSVParser : NSObject
{
}

+ (id)parseCSV:(id)arg1 error:(out id *)arg2;
+ (id)recordWithScanner:(id)arg1 error:(out id *)arg2;
+ (_Bool)newlineWithScanner:(id)arg1;
+ (id)fieldWithScanner:(id)arg1 error:(out id *)arg2;
+ (id)terminatingCharacterSet;
+ (id)newlineCharacterSet;
+ (id)quoteCharacterSet;
+ (id)commaCharacterSet;

@end
