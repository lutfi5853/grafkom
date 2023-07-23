#pragma once

#include "RenderEngine.h"
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <glm/gtx/vector_angle.hpp>
#include <SOIL/SOIL.h>

class Demo :
	public RenderEngine
{
public:
	Demo();
	~Demo();
private:
	GLuint shaderProgram, VBO, VAO, EBO, VBO2, VAO2, EBO2,textureDinding, textureKakiMeja, textureMeja, 
	textureAlasKursi, textureSandaranKursi, textureKakiKursi, texturePapanTulis, texturePlane;
	float viewCamX, viewCamY, viewCamZ, upCamX, upCamY, upCamZ, posCamX, posCamY, posCamZ, CAMERA_SPEED, fovy;
	float angle = 0;
	virtual void Init();
	virtual void DeInit();
	virtual void Update(double deltaTime);
	virtual void Render();
	virtual void ProcessInput(GLFWwindow *window);
	void BuildColoredPlane();
	void DrawColoredPlane(GLuint shader);
	void BuildColoredDinding();
	void DrawColoredDinding(
	float translateX, float translateY, float translateZ,
	float scaleX, float scaleY, float scaleZ, GLuint shader);
	void MoveCamera(float speed);
	void StrafeCamera(float speed);
	void RotateCamera(float speed);
	void InitCamera();

	GLuint depthmapShader, shadowmapShader, depthMapFBO, depthMap;
	const unsigned int SHADOW_WIDTH = 1024, SHADOW_HEIGHT = 1024;
	void BuildDepthMap();
	void BuildShaders();

	void BuildKakiMeja();
	void DrawKakiMeja(
		float translateX, float translateY, float translateZ,
		float scaleX, float scaleY, float scaleZ, GLuint shader
	);

	void BuildMeja();
	void DrawMeja(
		float translateX, float translateY, float translateZ,
		float scaleX, float scaleY, float scaleZ, GLuint shader
	);

	void BuildKakiKursi();
	void DrawKakiKursi(
		float translateX, float translateY, float translateZ,
		float scaleX, float scaleY, float scaleZ, GLuint shader
	);

	void BuildAlasKursi();
	void DrawAlasKursi(
		float translateX, float translateY, float translateZ,
		float scaleX, float scaleY, float scaleZ, GLuint shader
	);

	void BuildSandaranKursi();
	void DrawSandaranKursi(
		float translateX, float translateY, float translateZ,
		float scaleX, float scaleY, float scaleZ, float rotate, GLuint shader
	);

	void BuildPapanTulis();
	void DrawPapanTulis(
		float translateX, float translateY, float translateZ,
		float scaleX, float scaleY, float scaleZ, GLuint shader
	);

};

