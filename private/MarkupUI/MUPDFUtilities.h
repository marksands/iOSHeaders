//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface MUPDFUtilities : NSObject
{
}

+ (struct CGAffineTransform)flattenRotationTransformForPage:(struct CGPDFPage *)arg1 outMediaBox:(struct CGRect *)arg2 outCropBox:(struct CGRect *)arg3;
+ (long long)exifOrientationOfPage:(struct CGPDFPage *)arg1;
+ (unsigned long long)normalizedRotationAngleOfPage:(struct CGPDFPage *)arg1;
+ (unsigned long long)indexOfDictionary:(struct CGPDFDictionary *)arg1 inArray:(struct CGPDFArray *)arg2;
+ (id)createDictionaryFromPDFDictionary:(struct CGPDFDictionary *)arg1;
+ (id)createPDFDateString:(id)arg1;

@end

