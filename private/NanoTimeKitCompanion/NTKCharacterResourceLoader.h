//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CLKUIMmapFile, EAGLContext, NSBundle, NSMutableArray, NSMutableDictionary;

@interface NTKCharacterResourceLoader : NSObject
{
    EAGLContext *_context;
    NSBundle *_bundle;
    unsigned long long _clients;
    CLKUIMmapFile *_commonBankLatn;
    CLKUIMmapFile *_commonBankArab;
    CLKUIMmapFile *_minnieBank;
    CLKUIMmapFile *_mickeyBank;
    struct NTKCharacterPrograms _programs;
    NSMutableDictionary *_mapping;
    NSMutableArray *_array;
    NSMutableArray *_arrayByLocale[2];
}

+ (void)_deallocInstance;
+ (id)sharedInstance;
@property(readonly, nonatomic) EAGLContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (unsigned int)programUniformLocation:(unsigned long long)arg1 uniform:(int)arg2;
- (void)bindProgram:(unsigned long long)arg1;
- (void)bindTexture:(id)arg1;
- (id)textureWithName:(id)arg1;
- (id)textureWithName:(id)arg1 prefix:(id)arg2;
- (void)_loadTextures;
- (void)localeChanged;
- (id)_loadBank:(id)arg1 toArrays:(unsigned long long)arg2 allowNewKeys:(_Bool)arg3;
- (void)_loadPrograms;
- (void)removeClient;
- (void)addClient;
- (void)prime;
- (void)_asyncDeallocInstance;
- (void)dealloc;
- (id)init;

@end

