//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@interface NTKCompanionImageDataScaler : NSObject
{
    NSData *_outputData;
    NSData *_data;
    long long _orientation;
    struct CGSize _inputSize;
    struct CGSize _outputSize;
    struct CGRect _inputCrop;
}

@property(readonly, nonatomic) struct CGSize outputSize; // @synthesize outputSize=_outputSize;
@property(readonly, nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
@property(readonly, nonatomic) struct CGRect inputCrop; // @synthesize inputCrop=_inputCrop;
@property(readonly, nonatomic) struct CGSize inputSize; // @synthesize inputSize=_inputSize;
- (void).cxx_destruct;
- (void)cropAndScaleWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithSize:(struct CGSize)arg1 crop:(struct CGRect)arg2 data:(id)arg3 orientation:(long long)arg4 outputSize:(struct CGSize)arg5;

@end

