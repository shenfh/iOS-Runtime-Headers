/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
 */

@interface TXRParserImageIO : NSObject <TXRParser> {
    TXRImageInfo * _imageInfo;
    TXRTextureInfo * _textureInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) TXRTextureInfo *textureInfo;

+ (id)decodeCGImage:(struct CGImage { }*)arg1 desiredPixelFormat:(unsigned int)arg2 bufferAllocator:(id)arg3 options:(id)arg4 error:(id*)arg5;
+ (id)decodeCGImageNonIndexed:(struct CGImage { }*)arg1 desiredPixelFormat:(unsigned int)arg2 bufferAllocator:(id)arg3 options:(id)arg4 error:(id*)arg5;
+ (int)determineColorSpaceClass:(struct CGImage { }*)arg1 displayGamut:(unsigned int)arg2 options:(id)arg3;
+ (BOOL)exportImage:(id)arg1 url:(id)arg2 uttype:(struct __CFString { }*)arg3 error:(id*)arg4;
+ (BOOL)exportTexture:(id)arg1 url:(id)arg2 error:(id*)arg3;
+ (BOOL)handlesData:(id)arg1;

- (void).cxx_destruct;
- (BOOL)parseData:(id)arg1 bufferAllocator:(id)arg2 options:(id)arg3 error:(id*)arg4;
- (id)parsedImageAtLevel:(unsigned int)arg1 element:(unsigned int)arg2 face:(unsigned int)arg3;
- (id)textureInfo;

@end
