/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKPolygonCylinderView : UIView {
    double  _rotationAngle;
    _NTKPolygonCylinderTransformView * _transformView;
}

@property (nonatomic, readonly) unsigned int numberOfFaces;

- (void).cxx_destruct;
- (void)_informFaceViewsOfRotation;
- (float)_rotationAngleForFaceIndex:(int)arg1;
- (void)_setRotationAngle:(float)arg1;
- (void)_updateTransform;
- (void)enumerateFaceViewsWithBlock:(id /* block */)arg1;
- (id)initWithNumberOfFaces:(unsigned int)arg1;
- (void)layoutSubviews;
- (unsigned int)numberOfFaces;
- (void)rotateToFaceAtIndex:(int)arg1;
- (void)rotateToFraction:(float)arg1 fromFaceAtIndex:(int)arg2 toFaceAtIndex:(int)arg3;
- (void)setView:(id)arg1 forFaceAtIndex:(unsigned int)arg2;
- (id)viewForFaceAtIndex:(unsigned int)arg1;

@end