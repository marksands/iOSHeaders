//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NeutrinoCore/NUAutoCalculator.h>

@class NUImagePropertiesClient, PIFaceBalanceAutoCalculator;

@interface PIWhiteBalanceAutoCalculator : NUAutoCalculator
{
    PIFaceBalanceAutoCalculator *_faceAutoCaculator;
    NUImagePropertiesClient *_imagePropertiesClient;
    struct CGColor *_grayColor;
    struct CGColor *_grayColorXY;
    _Bool _isRAW;
}

- (void).cxx_destruct;
- (CDStruct_c3b9c2ee)_chooseTempTintForSushi:(CDStruct_92960315)arg1 RAWProperties:(id)arg2 brightness:(double)arg3;
- (CDStruct_145c54d4)_chooseNeutralGrayForNonSushi:(CDStruct_92960315)arg1;
- (CDStruct_145c54d4)_correctedRGBResultFromResult:(CDStruct_145c54d4)arg1;
- (_Bool)_useTempTint:(CDStruct_145c54d4)arg1;
- (void)calculate:(CDUnknownBlockType)arg1;
- (id)initWithComposition:(id)arg1;

@end

