//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

__attribute__((visibility("hidden")))
@interface TSCH3DLabelBitmapContextInfo : NSObject <NSCopying>
{
    _Bool mIsPrinting;
    _Bool mIsPDF;
    _Bool mHasSuppressedBackgrounds;
}

+ (id)contextInfoWithIsPrinting:(_Bool)arg1 isPDF:(_Bool)arg2 hasSuppressedBackgrounds:(_Bool)arg3;
+ (id)context;
+ (void)setIsPrinting:(_Bool)arg1 isPDF:(_Bool)arg2 hasSuppressedBackgrounds:(_Bool)arg3 forScene:(id)arg4;
+ (id)contextInfoForScene:(id)arg1;
@property(readonly, nonatomic) _Bool isPDF; // @synthesize isPDF=mIsPDF;
@property(readonly, nonatomic) _Bool isPrinting; // @synthesize isPrinting=mIsPrinting;
@property(readonly, nonatomic) _Bool hasSuppressedBackgrounds; // @synthesize hasSuppressedBackgrounds=mHasSuppressedBackgrounds;
- (void)setTSDCGContextInfoForCGContext:(struct CGContext *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithIsPrinting:(_Bool)arg1 isPDF:(_Bool)arg2 hasSuppressedBackgrounds:(_Bool)arg3;

@end

